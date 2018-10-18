main: main.cpp
	g++ -o main main.cpp

edit:
	vim main.cpp

clean:
	rm main

submit:
	git add .
	echo "Enter commit message: "
	read COMMIT
	git commit -a -m "$COMMIT"
	git push
