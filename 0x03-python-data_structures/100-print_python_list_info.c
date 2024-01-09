#include <stdio.h>
#include <python.h>

/**
 * print_python_list_info - displays information about a Python list
 *
 * @p: PyObject representing a Python list
 * Return: void (no return)
 */

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size, i;

	size = PyList_Size(p);
	printf("[*] Size of the Python List = %ld\n", size);

	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	for (i = 0; i < size; i++)
	{
		PyObject *item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}
