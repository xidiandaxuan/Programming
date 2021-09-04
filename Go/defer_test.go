package test

import (
	"fmt"
	"io/ioutil"
	"log"
	"net/http"
	"testing"
)

func TestDefer(t *testing.T) {
	fmt.Println("start")
	defer fmt.Println("middle")
	fmt.Println("end")
	//start
	//end
	//middle
}

func TestDefer2(t *testing.T) {
	defer fmt.Println("start")
	defer fmt.Println("middle")
	defer fmt.Println("end")
	//end
	//middle
	//start
}

func TestErr(t *testing.T) {
	res, err := http.Get("http://www.baidu.com")
	if err != nil {
		fmt.Println("err:", err)
		log.Fatal(err)
	}
	defer res.Body.Close()
	robots, err := ioutil.ReadAll(res.Body)
	if err != nil {
		log.Fatal(err) // not defer Close() ,2021/08/29 22:49:58 http: read on closed response body
	}
	fmt.Println(robots)
}

func TestDefer3(t *testing.T) {
	a := "start"
	defer fmt.Println(a)
	a = "end"
	// start
	//defer fmt.Println(a)
	// end
	//start
}

func TestPanic(t *testing.T) {
	//a, b := 1, 0
	//fmt.Println("result:", a/b)
	//panic: runtime error: integer divide by zero [recovered]
	//	panic: runtime error: integer divide by zero
	fmt.Println("start")
	panic("something bad happened!")
	fmt.Println("end")
	//panic: something bad happened! [recovered]
	//	panic: something bad happened!

}

func TestHelloGoWeb(t *testing.T) {
	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		w.Write([]byte("Hello Go !"))
	})
	err := http.ListenAndServe(":8082", nil)
	if err != nil {
		panic(err.Error())
	}
	// in website: http://localhost:8082/  or http://127.0.0.1:8082/
	// you will see "Hello Go !" string in your screen
}

func TestRecover(t *testing.T) {
	fmt.Println("start")
	defer fmt.Println("this was deferred!")
	panic("something bad happened!")
	fmt.Println("end")
	// this was deferred!
}

func TestRecover2(t *testing.T) {
	fmt.Println("start")
	defer func() {
		if err := recover(); err != nil {
			log.Println("Error:", err)
		}
	}()
	panic("something bad happened!")
	fmt.Println("end")
	//start
	//2021/08/29 23:06:04 Error: something bad happened!
}

func panicker() {
	fmt.Println("about to panic")
	defer func() {
		if err := recover(); err != nil {
			log.Println("Error:", err)
		}
	}()
	panic("something bad happened!")
	fmt.Println("about to panic end ")
}
func TestRecover3(t *testing.T) {
	fmt.Println("start")
	panicker()
	fmt.Println("end")
	//start
	//about to panic
	//2021/08/29 23:09:37 Error: something bad happened!
	//end
}
