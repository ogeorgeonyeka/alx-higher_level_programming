#include <python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
	long int size = pyList_size(p);
	int i;
	PyListObject *Obj = (PyListObject *)p;

	printf("[*] size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", Obj->allocated);
	for (I = 0; i < size; i++)
		printf("Element %i: %s\n", Py_TYPE(obj->ob_item[i]->tp_name);
}
