// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/Fuse.Elements/1.6.0/Resources/FileImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.Loadin-51208ece.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSourceImpl;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class FileImageSourceImpl :142
// {
::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof();
void FileImageSourceImpl__ctor_3_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file);
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this);
void FileImageSourceImpl__FailureCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Exception* e);
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval);
void FileImageSourceImpl__New2_fn(::g::Uno::UX::FileSource* file, FileImageSourceImpl** __retval);
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a);
void FileImageSourceImpl__get_Orientation_fn(FileImageSourceImpl* __this, int32_t* __retval);
void FileImageSourceImpl__SuccessCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture, int32_t* orientation);
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this);

struct FileImageSourceImpl : ::g::Fuse::Resources::LoadingImageSource
{
    uStrong< ::g::Uno::UX::FileSource*> _file;
    int32_t _orientation;

    void ctor_3(::g::Uno::UX::FileSource* file);
    void FailureCallback(::g::Uno::Exception* e);
    ::g::Uno::UX::FileSource* File();
    void OnDataChanged(uObject* s, uObject* a);
    void SuccessCallback(::g::Uno::Graphics::Texture2D* texture, int32_t orientation);
    void SyncLoad();
    static FileImageSourceImpl* New2(::g::Uno::UX::FileSource* file);
};
// }

}}} // ::g::Fuse::Resources
