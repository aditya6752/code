package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)
	var p float64
	fmt.Scanln(&p)
	myarr := make([]float64, n+1, 2*(n+1))
	myarr[0] = 1
	myarr[1] = 0
	myarr[2] = p / 100.0
	myarr[3] = 1 - p/100.0
	var ans float64
	for i := 4; i <= n; i++ {
		myarr[i] = (p/100.0)*myarr[i-2] + (1-p/100.0)*myarr[i-3]
	}
	for i := 1; i <= n; i++ {
		if n%i == 0 {
			ans += myarr[i]
		}
	}
	fmt.Println(ans)
}
