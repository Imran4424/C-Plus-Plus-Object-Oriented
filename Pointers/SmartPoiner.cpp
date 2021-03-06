/*
helpful links:
https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c

A std::unique_ptr owns of the object it points to and no other smart pointers 
can point to it. When the std::unique_ptr goes out of scope, the object is deleted. 
This is useful when you are working with a temporary, dynamically-allocated 
resource that can get destroyed once out of scope.

std::unique_ptr<int>    p1 = std::make_unique<int>();
std::unique_ptr<int[]>  p2 = std::make_unique<int[]>(50);
std::unique_ptr<Object> p3 = std::make_unique<Object>("Lamp");


*/