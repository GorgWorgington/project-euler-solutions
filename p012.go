package main

import (
        "fmt"
)

func factor(n int) (factors []int) {
    factors = append(factors, 1)
    defer func() {
        factors = append(factors, n)
    }()
    var i int
    for i = 2; i*i < n; i++ {
        if n % i == 0 {
            factors = append(factors, i)
        }
    }
    var last int
    if i*i == n {
        factors = append(factors, i)
        last = len(factors)-2
    } else {
        last = len(factors)-1
    }
    for i = last; i > 0; i-- {
        factors = append(factors, n/factors[i])
    }
    return
}


func main() {
    var t int = 0
    var fc int = 0 //Factor count
    for i := 1; fc <= 500; i++ {
        t += i
        fc = len(factor(t))
    }
    fmt.Println(t)
}
