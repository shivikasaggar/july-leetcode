//here are 8 prison cells in a row, and each cell is either occupied or vacant.
//Each day, whether the cell is occupied or vacant changes according to the following rules:
//If a cell has two adjacent neighbors that are both occupied or both vacant, then the cell becomes occupied.
//Otherwise, it becomes vacant.
//(Note that because the prison is a row, the first and the last cells in the row can't have two adjacent neighbors.)

//We describe the current state of the prison in the following way: cells[i] == 1 if the i-th cell is occupied, else cells[i] == 0.

//Given the initial state of the prison, return the state of the prison after N days (and N such changes described above.)

class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        unordered_map<string,int>m;
        for(int i=0;i<N;i++){
            string s(cells.begin(),cells.end());
            if(m.find(s)!=m.end()){
                int l=i-m[s];
                int remaining=(N-i)%l;
                return prisonAfterNDays(cells,remaining);
            }
            else{
                m.insert({s,i});
                int previous=cells[0];
                for(int j=1;j<7;j++){
                    int next=cells[j+1];
                    int current=cells[j];
                    cells[j]=previous==next;
                    previous=current;
                }
            }
            cells[0]=0;
            cells[7]=0;
        }
        return cells;
    }
};
