

/*

This file prevents classes from being optimized out by the compiler.

Dead-stripping is a compiler optimization that removes code that is not used in a binary. Because of how
InDesign code is referenced, the compiler can be fooled into optimizing it away. To prevent dead stripping,
your plug-in should have a file that references the new C++ class, so it is not dead-stripped. This prevents
the compilers from optimizing your code away because it appears not to be referenced.

*/

REGISTER_PMINTERFACE(IDHAScriptProvider, kIDHAScriptProviderImpl)
REGISTER_PMINTERFACE(IDHAObserver, kIDHAObserverImpl)
REGISTER_PMINTERFACE(IDHAResponder, kIDHAResponderImpl)

//  Code generated by DollyXs code generator