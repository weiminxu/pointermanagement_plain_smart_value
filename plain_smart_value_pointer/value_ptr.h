#pragma once

class CHasPtr
{
private:
	int val;
	int* ptr;
public:
	//CHasPtr(int* p, int i) :ptr(p), val(i) {}
	CHasPtr(const int& p, int i) :ptr(new int(p)), val(i) {}
	CHasPtr(const CHasPtr& orig) :ptr(new int(*orig.ptr)), val(orig.val) {}//copy constructure
	CHasPtr& operator=(const CHasPtr&);//copy operator
	~CHasPtr() { delete ptr; }

	int* get_ptr() const { return ptr; }
	int get_int() const { return val; }

	void set_ptr(int* p) { ptr = p; }
	void set_int(int i) { val = i; }

	int get_ptr_val() const { return *ptr; }
	void set_ptr_val(int val) const { *ptr = val; }

};

CHasPtr& CHasPtr::operator=(const CHasPtr& rhs)
{
	*ptr = *rhs.ptr;
	val = rhs.val;
	return *this;
}