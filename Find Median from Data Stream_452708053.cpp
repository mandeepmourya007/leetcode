class MedianFinder {
public:
    /** initialize your data structure here. */

    priority_queue<int> first,second;
    MedianFinder() {
   // n=0;
    }
    
    void addNum(int num) {
        
        first.push(num);
        second.push(-first.top());
        first.pop();
    if(first.size()<second.size())
    {
        first.push(-second.top());
        second.pop();
    }
    
    }
    
    double findMedian() {
    if(first.size()==second.size())
        return (first.top() -second.top())/2.0;
        
        return first.top();
        
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
