
#ifndef MULTIMAPSET_H
#define MULTIMAPSET_H

#include <map>
#include <set>
#include <iostream>

using namespace std;

template<typename key_type, typename val_type>
class multimapset
{
    public:
        multimapset();
        void insert(key_type key, val_type value);
        set<val_type> find(key_type key);

    private:
        map<key_type, set<val_type> > _map;
};


template<typename key_type, typename val_type>
multimapset<key_type, val_type> :: multimapset()
{
}

template<typename key_type, typename val_type>
void multimapset<key_type, val_type> :: insert(key_type key, val_type value)
{
    set<val_type> _set = _map.find(key) -> second;
    _set.insert(value);
    cout << _set.size() << value << endl; 
    _map[key] = _set;
}

template<typename key_type, typename val_type>
set<val_type> multimapset<key_type, val_type> :: find(key_type key)
{
    return _map.find(key) -> second;
}

#endif

