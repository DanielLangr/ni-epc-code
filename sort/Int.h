#pragma once

class Int
{
   public:
      Int(int i) : i_(i) { }
      Int(Int&&) = default;
      Int& operator=(Int&&) = default;

      operator int() const { return i_; }

   private:
      int i_;
};

bool compare_Int(const Int&, const Int&);

void swap(Int&, Int&);
