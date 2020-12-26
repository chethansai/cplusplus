
#include<bits/stdc++.h>
/*
#define int long long
#define LL long long
#define MP make_pair
#define PB push_back
#define fi first
#define se second
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define per(i,a,b) for(int i=(a);i>=(b);--i)
*/
using namespace std;

 
int execution(){
int t;
cin>>t;
while(t--){
	int n;
	vector<int>a;
	set<int>s;
	cin>>n;
	for(int i=0;i<n;i++){
int y;
cin>>y;
a.push_back(y);
s.insert(y);
	}int sum=0;
	for(auto i=s.begin();i!=s.end();i++){
		int x=*i;
		cout<<x;
		auto u=lower_bound(a.begin(),a.end(),x);
		auto r=upper_bound(a.begin(),a.end(),x);
		sum=sum+distance(a.begin(),r);
		cout<<r-u<<" ";

	}
	cout<<sum;
}

}
/*
int knowledge(){
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		//testacse writing
	int main(){
	int T;
	scanf("%d",&T);
	while (T--) solve();
}
		//decalaration
		int x,y,z[5];
		//vector
		vector<int> v;

		// initialize all members of an array to the same value?
		int x[10]={1};
		int y[10]={};//to 0
		
		//same line input
		for(int i=0;i<5;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		//outputting vector
				for(auto i=v.begin();i<v.end();i++){
			cout<<*i;
		}
		//sizeofarray
		cout<<sizeof(z)/sizeof(z[0]);
		//sizevector
		cout<<v.size();
		cout<<v[1]<<endl;
		//sorting vector
		sort(i.begin(),i.end());
		//insertat
		//random
		int w=v.size();
		cout<<w;
		int r=rand()% 20 + w;
		cout<<r<<endl;
		//remove all occurances of an elent
		cout<<"remove all occurances of an element: "<<endl<<"elemnts :"<<endl;

						for(auto i=v.begin();i<v.end();i++){
			cout<<*i;
		}
		cout<<endl;
		v.erase(remove(v.begin(),v.end(),3),v.end());
								for(auto i=v.begin();i<v.end();i++){
			cout<<*i;
		}
		cout<<endl;
		//array size change
		cout<<"array size change cjehck"<<endl;
		int a[2];
		int j=0;
		if(j==0){
		int a[4];
		cout<<sizeof(a);
		//multiple integer input
		string s;
		getline(cin,s);
		istringstream ss(s);
		int num;
		while(ss>>num) cout<<num<<endl;//v.push_back(s);
		
		//if element present 
		count(q.begin(),q.end(),*y);
		binary_search(q.begin(),q.end(),*y);
		//index
		distance(q.begin(),it);


		//dictionaries of c++ maps direct
map<char, char> my_map = {
    { 'A', '1' },
    { 'B', '2' },
    { 'C', '3' }
};



		//if element present 
		count(q.begin(),q.end(),*y);
		binary_search(q.begin(),q.end(),*y);
		//index
		distance(q.begin(),it);
		//fin index of first occurance of elemnt
		vector<int>::iterator it;
	it =find(i.begin(),i.end(),2);
	int y=distance(i.begin(),it);
	cout<<y;

	//check if element is present in vector or not
    auto aa=find(a.begin(),a.end(),3);
    cout<<distance(a.begin(),aa);
    if(distance(a.begin(),aa)==a.size()){
        cout<<"not present";
    }

//dictionaries of c++ maps one by one

map<int, int> gquiz1; 
  
    //gets sorted with key wise
    gquiz1.insert(pair<int, int>(2, 40)); 
    gquiz1.insert(pair<int, int>(1, 30)); 
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(make_pair(3,30));//doenot update
    gquiz1[2]=10;//update


//printing map
//IMPORTANT Iterator
map<int,int>::iterator itr;
    for(itr=gquiz1.begin();itr!=gquiz1.end();itr++){
    	cout<<itr->first;
    	    	cout<<itr->second;

    }

//reverse itterator
*****map<int,int>:: reverse_itterator itr;
    for(itr=gquiz1.rbegin();itr!=gquiz1.rend();itr++){
    	cout<<itr->first;
    	    	cout<<itr->second;

    }


//remove from map with key
	gquiz1.erase(4); 

//remove less than 3
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 



//using map for index based increment//no of times a number occurs in array

    vector <int> a;
 
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(3);
    map<int,int>m;
    map<int,int>:: iterator itrr;

        for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        
    }
        for(int i=0;i<a.size();i++){
        m[a[i]]=m[a[i]]+1;
        
    }
    cout<<endl;    

    cout<<endl;
            for(itrr =m.begin();itrr!=m.end();itrr++){
        cout<<itrr->first<<" "<<itrr->second<<" "<<endl;
        
    }

 //erase a key from map
 m.erase(2);

 //skip by 2 map for itteration
   itrr = m.begin ();
  advance(itrr,2);
or
//skip by 1 map for itteration
  for (  itrr = ++m.begin (); itrr != m.end (); itrr++)
    {
      cout << itrr->first << " " << itrr->second << " " << endl;

    }

 //all combinations permutations
 next_permutation
void display(int arr[],in u){
	for(int i=0;i<n;i++){
	cout<<arr[i];
	}
}
 do{
	display(arr,n)
 }while(next_permutation(arr,arr+n);

//prev_permutation
void display(int arr[],in u){
	for(int i=0;i<n;i++){
	cout<<arr[i];
	}
}

 do{
	display(arr,n)
 }while(prev_permutation(arr,arr+n);


//for  permutation of more than one array
//main

void display(int x[],int arr[],in u){
	for(int i=0;i<n;i++){
	cout<<arr[x[i]];
	}
}

int x[5]={0,1,2,3,4}
int arr[5]={1,2,3,4,5}
 do{
	display(x,arr,,n);
 }while(prev_permutation(x,x+4);

//pop trailing zeros
while(arr[arr.length-1]==0){
arr.pop()
}

//string to int
int u=stoi("12")

//int to sirng
string s=to_string(12)

//string length
s.length()
}

//array traversal for shortcut
 int a[4]={1,2,3,4};
  for(int y: a){
      cout<<y;
  }

//array of vectors
vector<a<int,n>>a;

//vector traversal for shortcut
   vector<int> b;
    b.push_back(2);
    b.push_back(2);
    b.push_back(2);

  for(int y: b){
      cout<<y;
  }

//array of vectors declaration and insertions
vector <int>b[3];
    b[0].push_back(2);
    b[0].push_back(2);
    b[1].push_back(1);
    b[1].push_back(1);
    b[2].push_back(3);
    b[2].push_back(3);


  //array of vectors traversal for shortcut
   vector<int> b;
    b[0].push_back(2);
    b[0].push_back(2);
    b[1].push_back(1);
    b[1].push_back(1);
    b[2].push_back(3);
    b[2].push_back(3);

  for(int y: b[0]){
      cout<<y;
  }

  //string to vector
  std::string s = "Hello World!";
 
    std::vector<char> v(s.begin(), s.end());
*/
int main()
{
			#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	execution();



	



}
// herhj
// herhj 
 

///weekends more 1500 sucess otherwise more than 5000 sucess