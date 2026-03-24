//compute average
 #include<iostream> 
 using namespace std;
 // Function to compute average, max and min 
 void computePerformance(float marks[], int size){
  float total = 0; 
    float max = marks[0];
     float min = marks[0];

     for(int i = 0; i < size; i++){
      total += marks[i]; 
    if(marks[i] > max)
     max = marks[i];
    if(marks[i] < min)
     min = marks[i]; 
    }

    float average = total / size; 
    cout << "\nAverage Marks = " << average << endl; 
    cout << "Maximum Marks = " << max << endl; 
    cout << "Minimum Marks = " << min << endl; 
}
int main() { 
    float marksarr[10]; cout << "Enter 10 subject marks:\n"; 
    for(int i = 0; i < 10; i++) { 
        cout << "Subject " << i + 1 << ": "; cin >> marksarr[i];
     }
     // Function call 
     computePerformance(marksarr, 10); 
     return 0; 
    }