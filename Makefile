ImageName = scratch-static:0.1
STATICBIN = main

all: build

build:
	gcc -o $(STATICBIN) -s -O3 main.c -static
	docker build -t $(ImageName) .
	echo "Your Docker Image is: $(ImageName) , enjoy!"
	docker run --rm -it $(ImageName) /$(STATICBIN)

rm:
	docker image rm $(ImageName) 
	rm $(STATICBIN)