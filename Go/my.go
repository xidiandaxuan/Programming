package main

import (
	"fmt"
)
import _ "Go/sha"

func init() {

	fmt.Printf("daxuan init:%d\n", 1)
}

const (
	aa = iota << 1
	bb = iota << 1
)

var my_fp = 3.0
var default_int = 7

type Doctor struct {
	number     int
	actorName  string
	companions []string
}

func (d *Doctor) Dprint() {
	if d != nil {
		fmt.Println("Doctor.number:", d.number)
		fmt.Println("Doctor.actorName:", d.actorName)
	} else {
		fmt.Println("receiver is nil")
	}

}

type Company struct {
	Doctors []Doctor
}

func main() {
	for i := 0; i < 5; i++ {
		fmt.Println("i:", i)
	}

	array := []int{1, 3, 4, 5, 6, 7, 8, 9, 10}
	for v := range array {
		//fmt.Println("i:", i, "v:", v)
		fmt.Println("v:", v)
		fmt.Println("array[v]:", array[v])
	}
	var qin *Doctor
	qin.Dprint()
	//var i int = 42
	//my_arr := []int{2}
	var u_map map[string]int
	my_map := make(map[string]int)
	my_map["daxuan"] = 29
	u_map = map[string]int{"shasha": 26}
	fmt.Println("shasha:", u_map["shasha"])

	u_map["shasha"] = 25

	fmt.Println("shasha:", u_map["shasha"])
	for v := range u_map {
		fmt.Println("in map:", v)
	}
	delete(u_map, "shasha")
	for v := range u_map {
		fmt.Println("in map:", v)
	}
	for v := range my_map {
		fmt.Println("in map:", v)
	}
	wang := Doctor{
		43,
		"wangshoufeng",
		[]string{"huawei", "erison"},
	}
	wang.Dprint()
	fmt.Printf("wang:%T,%#v\n", wang, wang)
	fmt.Println("wang first company:", wang.companions[1])
	const a = 2
	arry := [3]int{1, 2, 3}
	slice := []int{4: 9}
	fmt.Println("a:%T:, a:%v\n", a, a)
	fmt.Println("a:%T:, a:%v\n", aa, aa)
	fmt.Println("a:%T:, a:%v\n", bb, bb)
	fmt.Printf("arry:%T:, arry:%#v\n", arry, arry)
	fmt.Printf("slice:%T:, slice:%#v\n", slice, slice)

}

func init() {
	fmt.Printf("daxuan init:%d\n", 2)
}

func init() {
	fmt.Printf("daxuan init:%d\n", 3)
}

func init() {
	fmt.Printf("daxuan init:%d\n", 4)
}
