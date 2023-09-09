#pragma once

#include "Iterator.h"
#include <memory>
#include <vector>

namespace DP {
    
    /**
     * @brief Templated Container Class
     * 
     * @tparam T 
     */
    template<class T>
    class Container{
        private:
            /*!
            Data to be store in container
            */

        public:
            std::vector<T> m_data_;
            /**
             * @brief Iterator for Container class
             * 
             */
            // friend class Iterator<T, Container<T>>;
            
            /**
             * @brief Add item to container
             * 
             * @param a 
             */
            void Add(T a);

            /**
             * @brief Creates a Container's Iterator object
             * 
             * @return std::shared_ptr<Iterator<T, Container>> 
             */
            std::shared_ptr<Iterator<T, Container>> CreateIterator();
    };

}

