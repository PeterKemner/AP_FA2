#pragma once
#include <string>

class Employee{
    private:
        const std::string name;
        bool busy;
        bool forkliftCertificate;

    public:
        /// @brief
        /// Constructor op basis van meegegeven waarden
        /// @param name De naam van de employee.
        /// @param forkliftCertificate De certificate waarmee de employees pallets kunnen verplaatsen.
        /// @return Niet van toepassing.
        Employee(std::string name, bool forkliftCertificate);

        /// @brief
        /// Geeft naam van employee.
        /// @return De naam van de employee.
        std::string getName();

        /// @brief
        /// Geeft de status van de employee of ze busy zijn.
        /// @return Een bool van busy van een employee.
        bool getBusy();

        /// @brief
        /// Veranderd de busy status van een employee.
        /// @param busy De nieuwe stats van de employee.
        /// @return Niet van toepassing    
        void setBusy(bool busy);

        /// @brief
        /// Geeft de status van een employee of ze een forklift mogen gebruiken.
        /// @return De bool van forkliftCertificate van een employee.
        bool getForkliftCertificate();

        /// @brief
        /// Veranderd de forkliftCertificate status van een employee.
        /// @param forkliftCertificate De nieuwe status van de employee.
        /// @return Niet van toepassing
        void setForkliftCertificate(bool forkliftCertificate);
};
