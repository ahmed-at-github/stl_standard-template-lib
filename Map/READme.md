# map STL 

syntax `map<key_type, value_type, comp> mp;`
comp: Custom comparator function that defines how to compare two keys for sorting. It is optional and if not provided, sorts data in increasing order of the keys.

Initializer List
map<ktype, vtype> m = { {k1, v1}, {k2, v2}, …}


    Note: The map insert() function only insert an element if it does not exist in the map, otherwise it does nothing.