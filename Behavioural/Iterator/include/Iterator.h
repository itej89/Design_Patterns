#pragma once

#include "Iterator.h"

#include <memory>
#include <vector>

namespace DP {

    /**
     * @brief Generic template class
     * 
     * @tparam T 
     * @tparam U 
     */
    template <typename  T, typename U>
    class Iterator{

        public:

            Iterator(U* data);

            /**
             * @brief iterator type for vector
             * 
             */
            typedef typename std::vector<T>::iterator iter_type;


            /**
             * @brief get iterator to first item
             * 
             */
            void First();


            /**
             * @brief get iterator to next item
             * 
             */
            void Next();


            /**
             * @brief checks if end of list os reached
             * 
             */
            bool IsDone();


            /**
             * @brief get current iterator
             * 
             */
            iter_type Current();

        private:
            U* mData;
            iter_type m_it;
    };

}