#include "GUIFactory.h"
#include <memory>

namespace DP {

    /**
     * @brief Main class that renderes gui
     * 
     */
    class ApplcationFactory{
        private:
            std::shared_ptr<GUIFactory> factory;

        public:

            /**
             * @brief Construct a new Applcation Factory object
             * 
             * @param factory OS specific GUI factory object
             */
            ApplcationFactory(std::shared_ptr<GUIFactory> _factory);

            /**
             * @brief Method to update GUI
             * 
             */
            void updateGUI();
    };
}