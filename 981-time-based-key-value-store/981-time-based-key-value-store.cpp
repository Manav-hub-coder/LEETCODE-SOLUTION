class TimeMap {
public:
    unordered_map<string,unordered_map<int,string>>keyt;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keyt[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        if(!keyt.count(key))
        {
            return "";
        }
        for(int i=timestamp;i>0;i--)
        {
            if(keyt[key].count(i))
            {
                return keyt[key][i];
            }
        }
        return "";
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */