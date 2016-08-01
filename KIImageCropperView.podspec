Pod::Spec.new do |s|
  s.name         = "KIImageCropperView"
  s.version      = "0.0.1"
  s.summary      = "KIImageCropperView."
  s.description  = <<-DESC
                    0.0.1
                   DESC

  s.homepage     = "https://github.com/smartwalle/KIImageCropperView"
  s.license      = "MIT"
  s.author       = { "SmartWalle" => "smartwalle@gmail.com" }
  s.platform     = :ios, "6.0"
  s.source       = { :git => "https://github.com/smartwalle/KIImageCropperView.git", :tag => "#{s.version}" }
  s.source_files  = "KIImageCropperView/KIImageCropperView/*.{h,m}"
  s.framework     = "UIKit"
  s.requires_arc  = true
  s.dependency "KIAdditions/UIImage"
end
