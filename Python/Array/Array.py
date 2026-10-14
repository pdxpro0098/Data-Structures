import ctypes


class Array():
    data = (ctypes.py_object * 4)()




"""
Operation	What you implement
get(index)	Return the element at an index
set(index, value)	Replace an element
append(value)	Add an element; resize if full
insert(index, value)	Shift elements to make room
remove(index)	Shift elements to fill the gap
resize()	Allocate a larger buffer and copy elements
"""
