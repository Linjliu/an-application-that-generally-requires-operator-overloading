
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

//matches the Amazon shoe example
class Shoe
{
public:
    std::string mode1Name;
    double price;
    double avgReview;


    Shoe(std::string name, double p, double raying)
        : mode1Name(name), price(p), avgReview(raying)
    {

    }
    
    //Print shoe info
    void print() const
    {
        std::cout << "Mode1:" << mode1Name << "| Price $"
            << price << "| Avg Review" << avgReview << "/5\n";
    }

};


int main()
{
    //Create vector of Shoe objects
    std::vector<Shoe> shoes =
    {
        Shoe("Skechers Work Slip-On", 79.99, 4.60),
        Shoe("Nike Running Shoe", 119.99, 4.30),
        Shoe("Adidas Sneaker", 89.99, 4.70),
        Shoe("New Balance Trainer", 95.50, 4.40),
        Shoe("ASICS Gel-Runner", 105.00, 4.80)
    };

    // 1. Sort by Price: Low to High (ascending)
    std::vector<Shoe> sortByPriceAsc = shoes;
    std::sort(sortByPriceAsc.begin(), sortByPriceAsc.end(),
        [](const Shoe& a, const Shoe& b) {
            return a.price < b.price;
        });

    std::cout << "===== SORT: Price Low to High (Ascending) =====\n";
    for (const auto& s : sortByPriceAsc)
    {
        s.print();
    }

    //Sort by Price: High to Low (ascending)
    std::vector<Shoe> sortByReviewDesc = shoes;
    std::sort(sortByReviewDesc.begin(), sortByReviewDesc.end(),
        [](const Shoe& a, const Shoe& b) 
        {
            return a.price > b.price;
        });


    std::cout << "\n==== SORT: Avg revirw high to low (descending) ====\n";;

    for (const auto& s : sortByReviewDesc)
    {
        s.print();
    }

    return 0;
}




//3.1415926
