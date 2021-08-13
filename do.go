package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)
	var m int
	fmt.Scanln(&m)
	var ans int
	ans = m*n - m - n
	fmt.Println(ans)
}
