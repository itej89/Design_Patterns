#pragma once

namespace DP {

      /**
       * @brief Abstract class type for template classes
       * 
       */
     class Abstract{
        public:

            /**
             * @brief The actual algorithm that 
             knows the sequence of method calls
             * 
             */
            void TemplateMethod() const;

            /**
             * @brief BaseOperation1
             * 
             */
            void BaseOperation1() const;

            /**
             * @brief BaseOperation2
             * 
             */
            void BaseOperation2() const;

            /**
             * @brief Hook1 - subclass implementation is not mandatory
             * 
             */
            virtual void Hook1() const{};

            /**
             * @brief Hook2 - subclass implementation is not mandatory
             * 
             */
            virtual void Hook2() const{};

            /**
             * @brief RequiredOperation1 - subclass implementation necessary
             * 
             */
            virtual void RequiredOperation1() const = 0;

            /**
             * @brief RequiredOperation2 - subclass implementation necessary
             * 
             */
            virtual void RequiredOperation2() const = 0;
     };
}