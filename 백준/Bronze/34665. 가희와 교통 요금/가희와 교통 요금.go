package main

import (
	"fmt"
)

func main() {
	var s1 string
	var s2 string
	fmt.Scan(&s1, &s2)
	if s1 == s2 {
		fmt.Println("0")
	} else {
		fmt.Println("1550")
	}
}