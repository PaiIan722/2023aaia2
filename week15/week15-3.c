int equalSubstring(char* s, char* t, int maxCost) {
    int N = strlen(s); //�����D�r�ꪺ����
    int ans = 0,j = 0;
    for(int i=0;i<N;i++){ //�r�ꪺ�j��
        maxCost -= abs( s[i]- t[i] ); //C�y��������i�Y
        while(maxCost<0){
            maxCost += abs( s[j] - t[j] ); //�p��,�Oj����
            j += 1;
        }
        if(i-j+1>ans) ans = i-j+1;//��s����
    }
    return ans;//�Ұ�@�~1,���H�K����0����(���׷�M����)
}
