// Copyright by decordel 2022

#ifndef __BRAIN_H__
# define __BRAIN_H__
# define __BRAIN_SIZE__ 100
# define __CONSTRUCTOR_MESS__ "* What if?..*"
# define __DEAD_MESS__ "*ideas leaves me*"
# define __IDEA_1__ "Look after the senses and the sounds will look after \
themselves."
# define __IDEA_2__ "Curtsey while you're thinking what to say. It saves time."
# define __IDEA_3__ "If you don't think, you shouldn't talk."
# define __IDEA_4__ "Who in the world am I? Ah, that's the great puzzle."
# define __IDEA_5__ "Everything has a moral, if only you can find it."
# include <string>


class Brain {
 public:
    Brain();
    Brain(const Brain& orig);
    ~Brain();

    Brain& operator=(const Brain& orig);

    std::string     getRoundIdea();

 private:
    std::string _ideas[__BRAIN_SIZE__];
};


#endif //__BRAIN_H__
