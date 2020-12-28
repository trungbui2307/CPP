#include <iostream>
#include <vector>



class User
{   
    static int user_count;
    public:
    static int get_user_count()
    {
        return user_count;
    }
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
    void set_status(std::string status)
    {
        this->status = status;
    }
    User()
    {
        
        std::cout << "Constructor\n";
        user_count++;
    }
    User(std::string first_name, std::string last_name)
    {
        std::cout << "Constructor1\n";
        this->first_name = first_name;
        this->last_name = last_name;
        user_count++;
    }

    ~User()
    {
        user_count--;
        std::cout << "Destructor\n";
    }
   
    private:
    std::string status = "Single";
};
int User::user_count = 0;

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name &&
           users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}
/*
struct User
{
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
   
    private:
    std::string status = "Single";
};
*/

int main()
{
    User user, user1, user2, user3, user4;
    User user5("Caleb", "Curry");
    user.first_name = "Trung";
    user.last_name = "BUI";

    user1.first_name = "Trung1";
    user1.last_name = "BUI1";
    
    user2.first_name = "Trung2";
    user2.last_name = "BUI2";
    
    user3.first_name = "Trung3";
    user3.last_name = "BUI3";
    std::cout << User::get_user_count << "\n";
    
    //user.status = "Single";
    std::vector<User> users;
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);
    //users.push_back(User());


    user.first_name = "Trung24";
    user.last_name = "BUI42";

    std::cout << add_user_if_not_exists(users, user4) << std::endl;

    std::cout << "First name: " << user.first_name << "\n" <<
    "Last name: " << user.last_name << "\n" <<
    "Status: " << user.get_status() << std::endl;
    user.~User();
    std::cout <<User::get_user_count << "\n";
    return 0;
}