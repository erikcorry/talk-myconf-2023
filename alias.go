package main
import "fmt"

func main() {
	for i := 1; i <= 10; i++ {
		fmt.Println(DoesItAlias(i))
	}
}

func DoesItAlias(length int) bool {
	a := []int{}
	for i := 0; i < length; i++ {
		a = append(a, i)
	}
	b := append(a[:], 42)
	a = append(a, 103)
    return a[length] == b[length]
}
