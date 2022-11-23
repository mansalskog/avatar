S=20
all:
	gcc -Wall -Wextra -pedantic -std=c89 main.c -o main
	./main avatar.ppm
	wc -c main.c | awk '{for (M = 0; 3*M*M < $$1; M++); print M, 3*M*M - $$1}'
	diff main.c avatar.ppm || true
	ffmpeg -loglevel warning -hide_banner \
		-i avatar.ppm\
		-update 1 -y\
		-vf "scale=$(S)*iw:$(S)*ih" -sws_flags neighbor\
		avatar.png
clean:
	rm -f main avatar.ppm avatar.png
