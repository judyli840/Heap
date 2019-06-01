all: examheap

examheap : examheap.cpp heap.cpp
	g++ examheap.cpp heap.cpp -o examheap
