#!/usr/bin/env bash

triangle=()
exponent=0

__add_to_triangle() {
    
    local row=$1
    local col=$2
    local v=$3

    local index=$((row * $exponent + col))
    triangle[$index]=$v

}

draw_triangle() {
    
    local -n matrix=$1
    local rows=$exponent+1
    local cols=$exponent

    for ((i=0; i<rows; i++)); do
        for ((j=0; j<cols; j++)); do
            local index=$((i * cols + j))
            echo -n "${matrix[$index]} "
        done
        echo
    done

}

mount_triangle() {

    for((k=0; k<exponent+1; k++)); do
        # row, col, value
        exc=0
        for((j=0; j<k; j++)); do
            if [[ $exc -eq 0 ]]; then
                __add_to_triangle k 0 1
                exc=1
            else
                __add_to_triangle k j 0
            fi
        done
    done

}


main() {
    
    echo "Informe a potência: "
    read exponent

    mount_triangle
    
    draw_triangle triangle

}

main



