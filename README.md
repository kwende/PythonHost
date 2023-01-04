# TODO

- [x] Make basic "hello world" application given demo online. 
- [ ] Get function call code working; make sure to leave notes along the way


# NOTES
- Notice how the reference counting is explicitly controlled, much like in COM's AddRef/Release paradigm. See Py_DECREF. 
- Notice how functions can be considered "attributes": https://docs.python.org/3/c-api/object.html#c.PyObject_GetAttrString. 
