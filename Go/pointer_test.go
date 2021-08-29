package test

import (
	"fmt"
	"testing"
)

func TestIntPointer(t *testing.T) {
	var a int = 42
	var b *int = &a
	fmt.Println(b, &a)
	fmt.Println(a, *b)
	//0xc00000a360 0xc00000a360
	//42 42
}

type myStruct struct {
	foo int
}

func TestStruct(t *testing.T) {
	var my *myStruct
	//my = &myStruct{8}  // or the following is ok
	my = new(myStruct) // &{0}
	//my.foo = 8
	(*my).foo = 8
	println((*my).foo)
	fmt.Printf("%#v\n", my) //&test.myStruct{foo:8}
	fmt.Printf("%+v\n", my) //&{foo:8}
	fmt.Printf("%v\n", my)  //&{8}
	//&{8}
}

func TestArray(t *testing.T) {
	a := [3]int{1, 2, 3}
	b := a
	fmt.Println(a, b)
	a[1] = 8
	fmt.Println(a, b)
	//[1 2 3] [1 2 3]
	//[1 8 3] [1 2 3]
}

func TestSlice(t *testing.T) {
	a := []int{1, 2, 3}
	b := a
	fmt.Println(a, b)
	a[1] = 8
	fmt.Println(a, b)
	//[1 2 3] [1 2 3]
	//[1 8 3] [1 8 3]
}

func TestMap(t *testing.T) {
	a := map[string]string{"foo": "bar", "baz": "buz"}
	b := a
	fmt.Println("map len:", len(a))
	//fmt.Println("map capacity:", cap(a)) // invalid argument a (type map[string]string) for cap
	fmt.Println(a, b)
	a["foo"] = "qux"
	fmt.Println(a, b)
	//map[baz:buz foo:bar] map[baz:buz foo:bar]
	//map[baz:buz foo:qux] map[baz:buz foo:qux]
}
