#include <pybind11/pybind11.h>
#include "BinaryStar.h"
#include "AIS.h"


namespace py = pybind11;

PYBIND11_MODULE(pycompas, m) {
    m.doc() = R"pbdoc(
        Python bindings for COMPAS Binary Star Class
        --------------------------------------------
        .. currentmodule:: BinaryStar
        .. autosummary::
           :toctree: _generate
           Evolve
    )pbdoc";

    // bindings for BinaryStar class
    py::class_<BinaryStar>(m, "BinaryStar")
        .def(py::init<const AIS, const double, const double, const double, const double, const double, const double, const KickParameters, const KickParameters, const long int >())
        .def("Evolve", &BinaryStar::BinaryStar::Evolve);

#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}
