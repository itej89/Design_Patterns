#pragma once

namespace DP {

    /**
     * @brief Custom type object for storing data
     * 
     */
    class Data{
        private:
            /**
             * @brief Example Data to be stored
             * 
             */
            int m_data_;

        public:

        /**
         * @brief Construct a new Data object
         * 
         */
            Data(int i);

            /**
             * @brief Set the Data object
             * 
             * @param a 
             */
            void setData(int a);

            /**
             * @brief 
             * 
             * @return int 
             */
            int data();

    };
}