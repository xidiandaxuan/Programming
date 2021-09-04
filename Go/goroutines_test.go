package test

import (
	"fmt"
	"testing"
	"time"
)

// Creating goroutines
// Synchronization :waitGroups  Mutexes
// Parallelism
// Best practices
func sayHello() {
	fmt.Println("Hello")
}

func TestGoroutines(t *testing.T) {
	go sayHello() // nothing to input the screen ,
	// otherwhise time.Sleep(time.Second)
	time.Sleep(time.Second)
}

func TestFunc(t *testing.T) {
	msg := "hello"
	go func() {
		fmt.Println(msg)
	}()
	msg = "GoodBye"
	time.Sleep(100 * time.Millisecond)
	//GoodBye
}

func TestFunc2(t *testing.T) {
	msg := "hello"
	go func(s string) {
		fmt.Println(s)
	}(msg)
	msg = "GoodBye"
	time.Sleep(100 * time.Millisecond)
	//hello
}
