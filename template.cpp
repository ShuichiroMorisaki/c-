template <class Type> void print_array(const Type *a,const int n){
	for(int i=0;i<n;i++) cout << *(a+i) << "\n";
}


//明示的な具現化が必要
//need explicit instantiation
template<class Type>Type** two_dimension_array_new(int r,int c){
	Type **a=new Type*[r];
	for(int i=0;i<r;i++)*(a+i)=new Type[c];
	return a;
}

template<class Type>void two_dimension_array_delete(Type** a,int r){
	for(int i=0;i<r;i++)delete[] *(a+i);
	delete[] a;
}