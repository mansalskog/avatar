all:
	gcc -Wall -Wextra -pedantic -std=c89 main.c -o main
	./main avatar.ppm
	diff main.c avatar.ppm || true
	ffmpeg -loglevel warning -hide_banner -i avatar.ppm -update 1 -y avatar.png
clean:
	rm -f main avatar.ppm avatar.png
