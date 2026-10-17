int arr[50];
int maxSize=50;
int length=0;

void insertAtLast(int v){
    if(length < maxSize){
        arr[length] = v;
        length++;
    }
}
void insertAtPos(int v, int pos){
    if(length < maxSize){ //right shifting
        for(int i=length; i> pos;i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = v;
        length++;
    }
}
void insertAtFirst(int v){
    insertAtPos(v,0);
}





