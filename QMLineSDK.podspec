

Pod::Spec.new do |spec|


  spec.name         = "QMLineSDK"
  spec.version      = "4.1.0"
  spec.summary      = "QMLineSDK is sdk"

  spec.homepage     = "https://github.com/7moor-tech/QMLineSDK"

  spec.license      = "MIT"

  spec.author       = { "RockALins" => "rockcodealin@163.com" }

  spec.platform     = :ios,'9.0'

  spec.source       = { :git => "https://github.com/7moor-tech/QMLineSDK.git", :tag => spec.version.to_s }

  spec.resource      = 'QMLineBundle.bundle'
  spec.vendored_frameworks  = "QMLineSDK.framework"
  spec.pod_target_xcconfig = {'VALID_ARCHS'=>'armv7 x86_64 arm64'}

  spec.requires_arc = true
  spec.dependency 'Qiniu', '~> 8.4.0'
  spec.dependency 'FMDB', '~> 2.7.5'
  spec.dependency 'SocketRocket', '~> 0.6.0'

end
