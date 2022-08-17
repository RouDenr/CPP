// Copyright by decordel 2022

#ifndef __DATA_H__
# define __DATA_H__
# include <stdint.h>

class Data {
 public:
    Data();
    Data(const Data& data);

    Data&   operator=(const Data& orig);

    int     getId();

    ~Data();

 private:
    static int  _last_id;
    int         _id;
};


#endif //__DATA_H__
