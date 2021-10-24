param ([string[]]$arg)

function image {
    docker build -t dev .
}

function run {
    docker run -i -t -v C:\Users\1337\Desktop\TDND:/TDND dev /bin/bash
}