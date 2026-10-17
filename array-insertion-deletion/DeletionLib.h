void deletionFromLast(){
    if(length > 0){
        length--;
    }
}
void deletionFromPos(int pos){
    if(length > 0){
        for(int i=pos;i<=length-2;i++){
            arr[i] = arr[i+1];
        }
        length--;
    }
}
void deletionFromFirst(){
    deletionFromPos(0);
}
