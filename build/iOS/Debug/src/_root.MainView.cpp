// This file was generated based on /Users/mpeteu/Sites/tabs-layoutmaster/.uno/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.H1Text.h>
#include <_root.MainView.h>
#include <_root.ParagraphText.h>
#include <_root.Tab.h>
#include <_root.TabsLayoutMaster_bundle.h>
#include <_root.TabsLayoutMaster_FuseControlsNavigationControl_Active_Property.h>
#include <_root.TabsLayoutMaster_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[109];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :15
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Active"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Element.Lay...*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"indicator"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"page1Tab"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"page2Tab"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"page3Tab"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"navigation"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"page1"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"page2"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"page3"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, ::STRINGS[10/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, ::STRINGS[11/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, ::STRINGS[12/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, ::STRINGS[13/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, ::STRINGS[14/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, ::STRINGS[15/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, ::STRINGS[16/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, ::STRINGS[17/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, ::STRINGS[18/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, ::STRINGS[19/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, ::STRINGS[20/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, ::STRINGS[21/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, ::STRINGS[22/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, ::STRINGS[23/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, ::STRINGS[24/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, ::STRINGS[25/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, ::STRINGS[26/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, ::STRINGS[27/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, ::STRINGS[28/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, ::STRINGS[29/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, ::STRINGS[30/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, ::STRINGS[31/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, ::STRINGS[32/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, ::STRINGS[33/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, ::STRINGS[34/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, ::STRINGS[35/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, ::STRINGS[36/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, ::STRINGS[37/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, ::STRINGS[38/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, ::STRINGS[39/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, ::STRINGS[40/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), ::STRINGS[41/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, ::STRINGS[41/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), ::STRINGS[42/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, ::STRINGS[42/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), ::STRINGS[43/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, ::STRINGS[43/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), ::STRINGS[44/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, ::STRINGS[44/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), ::STRINGS[45/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, ::STRINGS[45/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), ::STRINGS[46/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, ::STRINGS[46/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), ::STRINGS[47/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, ::STRINGS[47/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), ::STRINGS[48/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, ::STRINGS[48/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), ::STRINGS[49/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, ::STRINGS[49/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), ::STRINGS[50/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, ::STRINGS[50/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), ::STRINGS[51/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, ::STRINGS[51/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), ::STRINGS[52/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, ::STRINGS[52/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), ::STRINGS[53/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, ::STRINGS[53/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), ::STRINGS[54/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, ::STRINGS[54/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), ::STRINGS[55/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, ::STRINGS[55/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), ::STRINGS[56/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, ::STRINGS[56/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), ::STRINGS[57/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, ::STRINGS[57/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, ::STRINGS[58/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, ::STRINGS[59/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, ::STRINGS[60/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, ::STRINGS[61/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, ::STRINGS[62/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, ::STRINGS[63/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, ::STRINGS[64/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, ::STRINGS[65/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, ::STRINGS[66/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, ::STRINGS[66/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, ::STRINGS[67/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, ::STRINGS[68/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, ::STRINGS[69/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, ::STRINGS[69/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, ::STRINGS[70/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, ::STRINGS[71/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, ::STRINGS[72/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, ::STRINGS[72/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, ::STRINGS[73/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, ::STRINGS[74/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, ::STRINGS[75/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, ::STRINGS[76/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, ::STRINGS[77/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, ::STRINGS[78/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, ::STRINGS[79/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, ::STRINGS[80/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, ::STRINGS[81/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, ::STRINGS[82/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, ::STRINGS[83/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, ::STRINGS[84/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, ::STRINGS[85/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, ::STRINGS[86/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, ::STRINGS[87/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, ::STRINGS[88/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, ::STRINGS[89/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, ::STRINGS[90/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[91/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, ::STRINGS[92/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, ::STRINGS[93/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, ::STRINGS[94/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, ::STRINGS[95/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, ::STRINGS[96/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RobotoMedium_, ::STRINGS[97/*"RobotoMedium"*/]);
    MainView::RobotoMedium_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::TabsLayoutMaster_bundle::RobotoMedium6ee0d371()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RobotoMedium_, ::STRINGS[97/*"RobotoMedium"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Active");
    ::STRINGS[1] = uString::Const("Element.LayoutMaster");
    ::STRINGS[2] = uString::Const("indicator");
    ::STRINGS[3] = uString::Const("page1Tab");
    ::STRINGS[4] = uString::Const("page2Tab");
    ::STRINGS[5] = uString::Const("page3Tab");
    ::STRINGS[6] = uString::Const("navigation");
    ::STRINGS[7] = uString::Const("page1");
    ::STRINGS[8] = uString::Const("page2");
    ::STRINGS[9] = uString::Const("page3");
    ::STRINGS[10] = uString::Const("Linear");
    ::STRINGS[11] = uString::Const("QuadraticIn");
    ::STRINGS[12] = uString::Const("QuadraticOut");
    ::STRINGS[13] = uString::Const("QuadraticInOut");
    ::STRINGS[14] = uString::Const("CubicIn");
    ::STRINGS[15] = uString::Const("CubicOut");
    ::STRINGS[16] = uString::Const("CubicInOut");
    ::STRINGS[17] = uString::Const("QuarticIn");
    ::STRINGS[18] = uString::Const("QuarticOut");
    ::STRINGS[19] = uString::Const("QuarticInOut");
    ::STRINGS[20] = uString::Const("QuinticIn");
    ::STRINGS[21] = uString::Const("QuinticOut");
    ::STRINGS[22] = uString::Const("QuinticInOut");
    ::STRINGS[23] = uString::Const("SinusoidalIn");
    ::STRINGS[24] = uString::Const("SinusoidalOut");
    ::STRINGS[25] = uString::Const("SinusoidalInOut");
    ::STRINGS[26] = uString::Const("ExponentialIn");
    ::STRINGS[27] = uString::Const("ExponentialOut");
    ::STRINGS[28] = uString::Const("ExponentialInOut");
    ::STRINGS[29] = uString::Const("CircularIn");
    ::STRINGS[30] = uString::Const("CircularOut");
    ::STRINGS[31] = uString::Const("CircularInOut");
    ::STRINGS[32] = uString::Const("ElasticIn");
    ::STRINGS[33] = uString::Const("ElasticOut");
    ::STRINGS[34] = uString::Const("ElasticInOut");
    ::STRINGS[35] = uString::Const("BackIn");
    ::STRINGS[36] = uString::Const("BackOut");
    ::STRINGS[37] = uString::Const("BackInOut");
    ::STRINGS[38] = uString::Const("BounceIn");
    ::STRINGS[39] = uString::Const("BounceOut");
    ::STRINGS[40] = uString::Const("BounceInOut");
    ::STRINGS[41] = uString::Const("Transparent");
    ::STRINGS[42] = uString::Const("Black");
    ::STRINGS[43] = uString::Const("Silver");
    ::STRINGS[44] = uString::Const("Gray");
    ::STRINGS[45] = uString::Const("White");
    ::STRINGS[46] = uString::Const("Maroon");
    ::STRINGS[47] = uString::Const("Red");
    ::STRINGS[48] = uString::Const("Purple");
    ::STRINGS[49] = uString::Const("Fuchsia");
    ::STRINGS[50] = uString::Const("Green");
    ::STRINGS[51] = uString::Const("Lime");
    ::STRINGS[52] = uString::Const("Olive");
    ::STRINGS[53] = uString::Const("Yellow");
    ::STRINGS[54] = uString::Const("Navy");
    ::STRINGS[55] = uString::Const("Blue");
    ::STRINGS[56] = uString::Const("Teal");
    ::STRINGS[57] = uString::Const("Aqua");
    ::STRINGS[58] = uString::Const("TopLeft");
    ::STRINGS[59] = uString::Const("Center");
    ::STRINGS[60] = uString::Const("Anchor");
    ::STRINGS[61] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[62] = uString::Const("VerticalBoxCenter");
    ::STRINGS[63] = uString::Const("TransformOriginOffset");
    ::STRINGS[64] = uString::Const("PositionOffset");
    ::STRINGS[65] = uString::Const("SizeFactor");
    ::STRINGS[66] = uString::Const("Size");
    ::STRINGS[67] = uString::Const("GiveFocus");
    ::STRINGS[68] = uString::Const("Keyboard");
    ::STRINGS[69] = uString::Const("LayoutChange");
    ::STRINGS[70] = uString::Const("WorldPositionChange");
    ::STRINGS[71] = uString::Const("PositionChange");
    ::STRINGS[72] = uString::Const("SizeChange");
    ::STRINGS[73] = uString::Const("Points");
    ::STRINGS[74] = uString::Const("Pixels");
    ::STRINGS[75] = uString::Const("ContentSize");
    ::STRINGS[76] = uString::Const("ScrollViewSize");
    ::STRINGS[77] = uString::Const("PreloadRetain");
    ::STRINGS[78] = uString::Const("UnloadUnused");
    ::STRINGS[79] = uString::Const("QuickUnload");
    ::STRINGS[80] = uString::Const("UnloadInBackground");
    ::STRINGS[81] = uString::Const("Thin");
    ::STRINGS[82] = uString::Const("Light");
    ::STRINGS[83] = uString::Const("Regular");
    ::STRINGS[84] = uString::Const("Medium");
    ::STRINGS[85] = uString::Const("Bold");
    ::STRINGS[86] = uString::Const("ThinItalic");
    ::STRINGS[87] = uString::Const("LightItalic");
    ::STRINGS[88] = uString::Const("Italic");
    ::STRINGS[89] = uString::Const("MediumItalic");
    ::STRINGS[90] = uString::Const("BoldItalic");
    ::STRINGS[91] = uString::Const("PlatformDefault");
    ::STRINGS[92] = uString::Const("Identity");
    ::STRINGS[93] = uString::Const("Local");
    ::STRINGS[94] = uString::Const("ParentSize");
    ::STRINGS[95] = uString::Const("Width");
    ::STRINGS[96] = uString::Const("Height");
    ::STRINGS[97] = uString::Const("RobotoMedium");
    ::STRINGS[98] = uString::Const("List");
    ::STRINGS[99] = uString::Const("Map");
    ::STRINGS[100] = uString::Const("About");
    ::STRINGS[101] = uString::Const("Welcome to Page 1");
    ::STRINGS[102] = uString::Const("Fuse HQ");
    ::STRINGS[103] = uString::Const("Find Artisanal Coffee Nearby.");
    ::STRINGS[104] = uString::Const("Read reviews you trust.");
    ::STRINGS[105] = uString::Const("Sip as much as you want.");
    ::STRINGS[106] = uString::Const("FindSomeCoffee is your guidebook to the best local artisanal coffee. Whether your drink of choice is a pour-over, cortado, nitro cold brew, or a raktajino - we will help you find the best cup of coffee in your neighborhood.");
    ::STRINGS[107] = uString::Const("No coffee shop gets a review after one or two visits. We visit our baristas until they smile when we walk in and say \342\200\234you _have_ to try what I\342\200\231m making today.\342\200\235");
    ::STRINGS[108] = uString::Const("The baristas are our inspiration and we review the experience of drinking their artisanal coffee.");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Controls::LayoutControl_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetFields(10,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(MainView, navigation_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(MainView, indicator_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, indicator), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, page1Tab), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, page2Tab), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MainView, page3Tab), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(MainView, navigation), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MainView, page1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MainView, page2), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MainView, page3), 0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::RobotoMedium_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 31;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    return type;
}

// public MainView() :129
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :133
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :129
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong< ::g::Fuse::Font*> MainView::RobotoMedium_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;

// public MainView() [instance] :129
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :133
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp1 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp2 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp3 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp4 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp5 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp6 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp7 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp8 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Fuse::ImageTools::ImageTools* temp9 = ::g::Fuse::ImageTools::ImageTools::New2();
    ::g::Polyfills::Window::WindowModule* temp10 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp11 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp12 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp13 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp14 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp15 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp16 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp17 = ::g::FuseJS::UserEvents::New2();
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::TabsLayoutMaster_FuseControlsNavigationControl_Active_Property::New1(navigation, MainView::__selector0_);
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Element_LayoutMaster_inst = ::g::TabsLayoutMaster_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MainView::__selector1_);
    ::g::Fuse::Triggers::LayoutAnimation* temp18 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp19 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp20 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp21 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp22 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Grid* temp23 = ::g::Fuse::Controls::Grid::New4();
    page1Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp24 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp25 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp26 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page2Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp27 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp28 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp29 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp30 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp31 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp32 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7176471f, 0.8784314f, 0.9294118f, 1.0f));
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp34 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp35 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::H1Text* temp36 = ::g::H1Text::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp38 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp39 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::NativeViewHost* temp40 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Controls::MapView* temp41 = ::g::Fuse::Controls::MapView::New4();
    ::g::Fuse::Controls::MapMarker* temp42 = ::g::Fuse::Controls::MapMarker::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp43 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6705883f, 0.7176471f, 0.7176471f, 1.0f));
    page3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp44 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp45 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp46 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::H1Text* temp47 = ::g::H1Text::New4();
    ::g::H1Text* temp48 = ::g::H1Text::New4();
    ::g::H1Text* temp49 = ::g::H1Text::New4();
    ::g::ParagraphText* temp50 = ::g::ParagraphText::New4();
    ::g::ParagraphText* temp51 = ::g::ParagraphText::New4();
    ::g::ParagraphText* temp52 = ::g::ParagraphText::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp53 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9490196f, 0.945098f, 0.9372549f, 1.0f));
    Background(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(1.0f, 0.6039216f, 0.6039216f, 1.0f));
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(5.0f, 1));
    uPtr(indicator)->Alignment(12);
    uPtr(indicator)->Name(MainView::__selector2_);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    temp19->X(1.0f);
    temp19->Duration(0.25);
    temp19->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_);
    temp19->Easing(::g::Fuse::Animations::Easing::BackIn_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    ::g::Fuse::Controls::DockPanel::SetDock(temp21, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp22, 3);
    temp23->ColumnCount(3);
    temp23->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp23, 2);
    temp23->Background(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page3Tab);
    uPtr(page1Tab)->Name(MainView::__selector3_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp24->Text(::STRINGS[98/*"List"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp26);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp26, page1);
    uPtr(page2Tab)->Name(MainView::__selector4_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp27->Text(::STRINGS[99/*"Map"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp29);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp29, page2);
    uPtr(page3Tab)->Name(MainView::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp30->Text(::STRINGS[100/*"About"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp32, page3);
    uPtr(navigation)->Name(MainView::__selector6_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page3);
    uPtr(page1)->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(page1)->Name(MainView::__selector7_);
    uPtr(page1)->Background(temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp34->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp35);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp35, page1Tab);
    temp36->Value(::STRINGS[101/*"Welcome to ...*/]);
    uPtr(page2)->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(page2)->Name(MainView::__selector8_);
    uPtr(page2)->Background(temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp38->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp39);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp39, page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp41->Zoom(10.0);
    temp41->Latitude(59.911567);
    temp41->Longitude(10.74103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->Label(::STRINGS[102/*"Fuse HQ"*/]);
    temp42->Latitude(59.911567);
    temp42->Longitude(10.74103);
    uPtr(page3)->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(page3)->Name(MainView::__selector9_);
    uPtr(page3)->Background(temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp44->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp45);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp45, page3Tab);
    temp46->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp46->Alignment(5);
    temp46->Opacity(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp47->Value(::STRINGS[103/*"Find Artisa...*/]);
    temp48->Value(::STRINGS[104/*"Read review...*/]);
    temp49->Value(::STRINGS[105/*"Sip as much...*/]);
    temp50->Value(::STRINGS[106/*"FindSomeCof...*/]);
    temp51->Value(::STRINGS[107/*"No coffee s...*/]);
    temp52->Value(::STRINGS[108/*"The barista...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
}

// public MainView New() [static] :129
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
