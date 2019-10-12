/*
helpful links:
https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c

C++11 has introduced three types of smart pointers, all of them defined in 
the <memory> header from the Standard Library:

    std::unique_ptr — a smart pointer that owns a dynamically allocated resource;

    std::shared_ptr — a smart pointer that owns a shared dynamically allocated 
    resource. Several std::shared_ptrs may own the same resource and an internal 
    counter keeps track of them;
    
    std::weak_ptr — like a std::shared_ptr, but it doesn't increment the counter.


*/