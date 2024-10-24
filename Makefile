
test: e-render/test/0-matharr/main.cpp
	# cd test/0-matharr/
	g++ e-render/test/0-matharr/main.cpp -o main -lGL -lGLU -lglut -ldl -lm -lGLEW -lXi -lXmu  
	./main

clean:
	cd test/0-math::arr/
	rm -f main


