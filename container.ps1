param (
	[switch]$dev,
	[switch]$test,
	[switch]$clean
)

if ($dev) {
	docker build -t dev --target dev .
	docker run -i -t -v C:\Users\1337\Desktop\TDND:/opt/TDND dev /bin/bash
}

if ($test) {
	docker build -t test --target test .
	docker run -i test
}

if ($clean) {
	docker container prune
	docker image prune
}