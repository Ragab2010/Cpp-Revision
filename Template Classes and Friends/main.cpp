///*
// * main.cpp
// *
// *  Created on: Aug 29, 2021
// *      Author: ragab
// */
//
//#include <iostream>
//using namespace std;
//
///*****************************Bound Template Friend Functions to Template Classes***************************************/
//// template prototypes
//template <typename T> void counts();
//template <typename T> void report(T &);
//
//
//// template class
//template <typename TT>
//class HasFriendT
//{
//private:
//	TT item;
//	static int ct;
//public:
//	HasFriendT(const TT & i) : item(i) {ct++;}
//	~HasFriendT() { ct--; }
//	friend void counts<TT>();
//	friend void report<>(HasFriendT<TT> &);
//};
//
//
//template <typename T>
//int HasFriendT<T>::ct = 0;
//
//
//
//// template friend functions definitions
//template <typename T>
//void counts()
//{
//	cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
//	cout << "template counts(): " << HasFriendT<T>::ct << endl;
//}
//template <typename T>
//void report(T & hf)
//{
//	cout << hf.item << endl;
//}
//
//int main()
//{
//	HasFriendT<int> hfi1(10);
//	HasFriendT<int> hfi2(20);
//	HasFriendT<double> hfdb(10.5);
//	report(hfi1); // generate report(HasFriendT<int> &)
//	report(hfi2); // generate report(HasFriendT<int> &)
//	report(hfdb); // generate report(HasFriendT<double> &)
//	counts<int>();
//	counts<double>();
//return 0;
//}


/*
 * main.cpp
 *
 *  Created on: Aug 29, 2021
 *      Author: ragab
 */

#include <iostream>
using namespace std;

/*****************************UNBound Template Friend Functions to Template Classes***************************************/


// template class
template <typename T>
class HasFriendT
{
private:
	T item;
	static int ct;
public:
	HasFriendT(const T & i) : item(i) {ct++;}
	~HasFriendT() { ct--; }
	template <typename C>
	friend void report(HasFriendT<C> &);
};


template <typename T>
int HasFriendT<T>::ct = 0;




template <typename C>
void report(HasFriendT<C> & hf)
{
	cout << hf.item << endl;
}

int main()
{
	HasFriendT<int> hfi1(10);
	HasFriendT<int> hfi2(20);
	HasFriendT<double> hfdb(10.5);
	report(hfi1); // generate report(HasFriendT<int> &)
	report(hfi2); // generate report(HasFriendT<int> &)
	report(hfdb); // generate report(HasFriendT<double> &)

return 0;
}

