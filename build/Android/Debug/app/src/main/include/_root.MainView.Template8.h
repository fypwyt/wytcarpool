// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/.uno/ux13/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template8;}

namespace g{

// public partial sealed class MainView.Template8 :173
// {
::g::Uno::UX::Template_type* MainView__Template8_typeof();
void MainView__Template8__ctor_1_fn(MainView__Template8* __this, ::g::MainView* parent, ::g::MainView* parentInstance);
void MainView__Template8__New1_fn(MainView__Template8* __this, uObject** __retval);
void MainView__Template8__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template8** __retval);

struct MainView__Template8 : ::g::Uno::UX::Template
{
    uWeak< ::g::MainView*> __parent1;
    uWeak< ::g::MainView*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template8_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MainView* parent, ::g::MainView* parentInstance);
    static MainView__Template8* New2(::g::MainView* parent, ::g::MainView* parentInstance);
};
// }

} // ::g
